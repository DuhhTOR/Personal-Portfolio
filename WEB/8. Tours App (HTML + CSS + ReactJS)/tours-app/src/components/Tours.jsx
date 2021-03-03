import Tour from "./Tour";

const Tours = ({ tours, removeTour }) => {
  return (
    <main className="tours">
      <h1>Our Tours</h1>
      <span className="underline"></span>
      {tours.map((tour) => {
        return <Tour key={tour.id} tour={tour} removeTour={removeTour} />;
      })}
    </main>
  );
};

export default Tours;
