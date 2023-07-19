import React from 'react';

function TodoListItem({ listItem, onRemoveTodo }) {
    return (
        <li>
            <span style={{ marginRight: '8px' }}>{listItem.title}</span>
            <button onClick={() => onRemoveTodo(listItem.id)}>Remove</button>
        </li>
    );
}

export { TodoListItem }