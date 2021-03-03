import { useState, useEffect } from "react";
import Loading from "./components/Loading";
import Reload from "./components/Reload";
import Tours from "./components/Tours";

const url = "https://course-api.com/react-tours-project";

const App = () => {
  const [loading, setLoading] = useState(true);
  const [tours, setTours] = useState([]);

  const fetchData = async () => {
    try {
      setLoading(true);

      let response = await fetch(url);
      let data = await response.json();

      setTours(data);
      setLoading(false);
    } catch (message) {
      setLoading(false);
      console.log(message);
    }
  };

  useEffect(() => {
    fetchData();
  }, []);

  const removeTour = (id) => {
    setTours(
      tours.filter((tour) => {
        return tour.id !== id;
      })
    );
  };

  if (loading) {
    return (
      <div className="App">
        <Loading />
      </div>
    );
  } else if (tours.length === 0) {
    return (
      <div className="App">
        <Reload fetchData={fetchData} />
      </div>
    );
  } else {
    return (
      <div className="App">
        <Tours tours={tours} removeTour={removeTour} />
      </div>
    );
  }
};

export default App;
