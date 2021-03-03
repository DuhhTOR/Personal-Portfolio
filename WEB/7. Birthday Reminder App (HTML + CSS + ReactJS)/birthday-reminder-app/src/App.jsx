import { useState } from "react";
import PeopleList from "./components/PeopleList.jsx";
import data from "./data";
import "./css/App.css";

const App = () => {
  const [people, setPeople] = useState(data);
  const [active, setActive] = useState(false);

  return (
    <main className="app">
      <h3>
        {people.length} birthday{people.length === 1 ? "" : "s"} today
      </h3>
      <PeopleList people={people} />
      <button
        className={active ? "btn-hidden" : "btn"}
        onClick={() => {
          setPeople([]);
          setActive(!active);
        }}
      >
        Clear All
      </button>
    </main>
  );
};

export default App;
