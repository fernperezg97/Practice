import * as React from 'react';
import { useEffect } from 'react';
import { TodoList } from './TodoList.js';
import { AddTodoForm } from './AddTodoForm.js';
 
function useSemiPersistentState() {
  const [todoList, setTodoList] = React.useState(() => {
    const savedTodoList = localStorage.getItem('savedTodoList');
    return savedTodoList ? JSON.parse(savedTodoList) : [];
  });
  useEffect(() => {
    localStorage.setItem('savedTodoList', JSON.stringify(todoList));
  }, [todoList]);

  return [todoList, setTodoList];
}

function App() {
  const [todoList, setTodoList] = useSemiPersistentState();
  
  function addTodo(newTodo) {
    setTodoList([...todoList, newTodo]);
  }

  function removeTodo(id) {
    const updatedTodoList = todoList.filter((item) => item.id !== id);
    setTodoList(updatedTodoList);
  };
  
  return (
      <>
        <h1>React Assignment: Todo List</h1>
        <AddTodoForm onAddTodo={addTodo} /> {/* When initializing a component, if your component (function) takes in props, that is your key to know that your component--AddTodoForm in this case--takes something in and you need to add props after calling and creating an instance of the component. */}
        <TodoList todoList={todoList} onRemoveTodo={removeTodo} />
      </>
  );
}

export default App;