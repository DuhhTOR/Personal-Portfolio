import "../css/Menu.css";

const Menu = ({ renderCategory }) => {
  return (
    <main className="menu">
      {renderCategory.map((item) => {
        return (
          <article className="menu-item" key={item.id}>
            <img src={item.img} alt={item.title} />
            <div className="title-price-container">
              <h5>{item.title}</h5>
              <b>${item.price}</b>
            </div>
            <p>{item.desc}</p>
          </article>
        );
      })}
    </main>
  );
};

export default Menu;
