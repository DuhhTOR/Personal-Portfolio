import { useState } from "react";
import "../css/Categories.css";

const Categories = ({ menuItems, setRenderCategory }) => {
  const [active, setactive] = useState("all");

  let categories = ["all", ...new Set(menuItems.map((item) => item.category))];

  return (
    <div className="category-menu">
      {categories.map((category, index) => {
        return (
          <button
            className={active === category ? "category-btn category-active" : "category-btn"}
            key={index}
            onClick={() => {
              if (category === "all") {
                setRenderCategory(() => menuItems);
                setactive(() => category);
              } else {
                const filteredMenuItems = menuItems.filter((item) => item.category === category);
                setRenderCategory(() => filteredMenuItems);
                setactive(() => category);
              }
            }}
          >
            {category}
          </button>
        );
      })}
    </div>
  );
};

export default Categories;
