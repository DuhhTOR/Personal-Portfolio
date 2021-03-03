import Question from "./components/Question";
import data from "./data";
import "./css/App.css";

const App = () => {
  return (
    <div className="App">
      <h1>Questions and answers about login</h1>
      <main>
        {data.map((questionAnswer) => (
          <Question key={questionAnswer.id} {...questionAnswer} />
        ))}
      </main>
    </div>
  );
};

export default App;
