import { useState } from "react";
import Categories from "./components/Categories";
import Menu from "./components/Menu";
import menuItems from "./data";
import "./css/App.css";

const App = () => {
  const [renderCategory, setRenderCategory] = useState(menuItems);

  return (
    <div className="App">
      <h1>Our Menu</h1>
      <span className="underline"></span>
      <Categories menuItems={menuItems} setRenderCategory={setRenderCategory} />
      <Menu renderCategory={renderCategory} />
    </div>
  );
};

export default App;
