import "../css/PeopleList.css";

const PeopleList = ({ people }) => {
  return (
    <div className="people-list">
      {people.map((person) => {
        return (
          <div className="person">
            <img src={person.image} alt={person.name} />
            <h5>{person.name}</h5>
            <p>{person.age} years</p>
          </div>
        );
      })}
    </div>
  );
};

export default PeopleList;
