import { useState } from "react";
import data from "../data";
import { FaQuoteLeft, FaAngleLeft, FaAngleRight } from "react-icons/fa";
import "../css/Review.css";

const Review = () => {
  const [index, setIndex] = useState(3);
  const { id, name, job, image, text } = data[index];

  const previousReview = () => {
    setIndex(() => {
      if (index === 0) {
        return data.length - 1;
      } else {
        return index - 1;
      }
    });
  };

  const nextReview = () => {
    setIndex(() => {
      if (index === data.length - 1) {
        return 0;
      } else {
        return index + 1;
      }
    });
  };

  const randomReview = () => {
    setIndex(() => {
      let randomNum = Math.floor(Math.random() * data.length);

      if (randomNum === index) {
        if (index === data.length - 1) {
          return 0;
        } else {
          return index + 1;
        }
      } else {
        return randomNum;
      }
    });
  };

  return (
    <main className="review">
      <div className="img-container">
        <i className="quote-icon">
          <FaQuoteLeft color="lime" />
        </i>
        <img src={image} alt={name}></img>
      </div>
      <h3>{name}</h3>
      <h5>{job}</h5>
      <p>{text}</p>
      <div className="move-btn-container">
        <button className="move-icon" onClick={previousReview}>
          <FaAngleLeft />
        </button>
        <button className="move-icon" onClick={nextReview}>
          <FaAngleRight />
        </button>
      </div>
      <button className="random-btn" onClick={randomReview}>
        Suprise Me
      </button>
    </main>
  );
};

export default Review;
