import { useState } from "react";

const Tour = ({ tour, removeTour }) => {
  const [show, setShow] = useState(false);
  const { id, image, info, price, name } = tour;

  return (
    <article className="tour">
      <img src={image} alt={name} />
      <h3>{name}</h3>
      <b>${price}</b>
      <p>
        {show ? `${info} ` : `${info.substring(0, 150)}... `}
        <button
          className="show-btn"
          onClick={() => {
            setShow(!show);
          }}
        >
          {show ? "Show Less" : "Read More"}
        </button>
      </p>
      <button
        className="delete-btn"
        onClick={() => {
          removeTour(id);
        }}
      >
        Not Interested
      </button>
    </article>
  );
};

export default Tour;
