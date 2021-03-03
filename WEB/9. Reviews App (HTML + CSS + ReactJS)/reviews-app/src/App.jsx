import Review from "./components/Review";
import "./css/App.css";

const App = () => {
  return (
    <div className="App">
      <h1>Our Reviews</h1>
      <span className="underline"></span>
      <Review />
    </div>
  );
};

export default App;
