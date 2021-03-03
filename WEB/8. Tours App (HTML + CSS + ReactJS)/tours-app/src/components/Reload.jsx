const Reload = ({ fetchData }) => {
  return (
    <div className="refresh">
      <h1>No Tours Left</h1>
      <span className="underline"></span>
      <button onClick={() => fetchData()}>Refresh</button>
    </div>
  );
};

export default Reload;
