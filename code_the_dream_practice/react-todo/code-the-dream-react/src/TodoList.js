import React from 'react';
import { TodoListItem } from './TodoListItem';


function TodoList({ todoList, onRemoveTodo }) {
    return (
      <ul>
        {todoList.map((listItem) => (
          <TodoListItem key={listItem.id} listItem={listItem} onRemoveTodo={onRemoveTodo} />
        ))}
      </ul>
    );
}

export { TodoList }