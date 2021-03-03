import { useState } from "react";
import { HiOutlinePlusSm, HiOutlineMinusSm } from "react-icons/hi";
import "../css/Question.css";

const Question = ({ title, info }) => {
  const [toggle, setToggle] = useState(false);

  return (
    <article className={toggle ? "question question-toggled" : "question"}>
      <h3>{title}</h3>
      <button className="toggle-btn" onClick={() => setToggle(!toggle)}>
        {toggle ? "-" : "+"}
      </button>
      {toggle ? <p>{info}</p> : ""}
    </article>
  );
};

export default Question;
