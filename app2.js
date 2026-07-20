// import React, { useState } from 'react';

// const App = () => {
//   const [students, setStudents] = useState([]);
//   const [studentName, setStudentName] = useState('');
//   const [error, setError] = useState('');

//   const handleAddStudent = () => {

//      /*
  
//         Users can add a student by entering a name in the input field and clicking the "Add Student" button.
//         If a student name is empty or consists only of whitespace, an error message ("Student name cannot be empty.") should be displayed, and the student should not be added.
//         If a student name is a duplicate of an existing entry (case-insensitive), an error message ("Student with this name already exists.") should be displayed, and the student should not be added.
//         If no issues are found, the student is added to the list with an initial 'Absent' attendance status with unique ID
//         After a successful addition, the input field should clear automatically.
//         Clear any previous error messages, since a valid student was added
            
    
//     */
   
//   };

//   const handleDeleteStudent = (id) => {

//      /*
    
//       Delete the student from the list
    
//     */
//   };

//   const toggleAttendance = (id) => {

//     /*
     
//       Toggle the attendance status between "Present" and "Absent" for the student with the specified id
    
//     */
  
//   };

//   return (
//     <div className="container mt-5">
//       <h1 className="text-center mb-4">Attendance Tracker</h1>
//       <div className="input-group mb-3">
//         <input
//           type="text"
//           className="form-control"
//           placeholder="Enter student name"
//           value={studentName}
//           onChange={(e) => setStudentName(e.target.value)}
//         />
//         <button className="btn btn-success" onClick={handleAddStudent}>
//           Add Student
//         </button>
//       </div>
//       {error && <div className="alert alert-danger" role="alert">{error}</div>}
//       <ul className="list-group">
//         {students.map((student) => (
//           <li
//             key={student.id}
//             className="list-group-item d-flex justify-content-between align-items-center"
//           >
//             <span>{student.name}</span>
//             <span className="badge bg-primary">{student.attendance}</span>
//             <div>
//               <button
//                 className="btn btn-sm btn-info me-2"
//                 onClick={() => toggleAttendance(student.id)}
//               >
//                 {/* Display "Mark Absent" if the student is present, and "Mark Present" if the student is absent, to allow toggling their attendance status. */}

//               </button>
//               <button
//                 className="btn btn-sm btn-danger"
//                 onClick={() => handleDeleteStudent(student.id)}
//               >
//                 Delete
//               </button>
//             </div>
//           </li>
//         ))}
//       </ul>
//     </div>
//   );
// };

// export default 































import React, { useState } from "react";

function App() {
  const [students, setStudents] = useState([]);
  const [studentName, setStudentName] = useState("");
  const [error, setError] = useState("");

  const handleAddStudent = () => {
    const name = studentName.trim();

    // Empty check
    if (name === "") {
      setError("Student name cannot be empty.");
      return;
    }

    // Duplicate check
    const exists = students.some(
      (student) => student.name.toLowerCase() === name.toLowerCase()
    );

    if (exists) {
      setError("Student with this name already exists.");
      return;
    }

    // Add student
    const newStudent = {
      id: Date.now(),
      name: name,
      attendance: "Absent",
    };

    setStudents([...students, newStudent]);

    // Clear input and error
    setStudentName("");
    setError("");
  };

  const handleDeleteStudent = (id) => {
    setStudents(
      students.filter((student) => student.id !== id)
    );
  };

  const toggleAttendance = (id) => {
    setStudents(
      students.map((student) =>
        student.id === id
          ? {
              ...student,
              attendance:
                student.attendance === "Present"
                  ? "Absent"
                  : "Present",
            }
          : student
      )
    );
  };

  return (
    <div className="container mt-5">
      <h1 className="text-center mb-4">
        Attendance Tracker
      </h1>

      <div className="input-group mb-3">
        <input
          type="text"
          className="form-control"
          placeholder="Enter student name"
          value={studentName}
          onChange={(e) => setStudentName(e.target.value)}
        />

        <button
          className="btn btn-success"
          onClick={handleAddStudent}
        >
          Add Student
        </button>
      </div>

      {error && (
        <div className="alert alert-danger" role="alert">
          {error}
        </div>
      )}

      <ul className="list-group">
        {students.map((student) => (
          <li
            key={student.id}
            className="list-group-item d-flex justify-content-between align-items-center"
          >
            <span>{student.name}</span>

            <span className="badge bg-primary">
              {student.attendance}
            </span>

            <div>
              <button
                className="btn btn-sm btn-info me-2"
                onClick={() => toggleAttendance(student.id)}
              >
                {student.attendance === "Present"
                  ? "Mark Absent"
                  : "Mark Present"}
              </button>

              <button
                className="btn btn-sm btn-danger"
                onClick={() =>
                  handleDeleteStudent(student.id)
                }
              >
                Delete
              </button>
            </div>
          </li>
        ))}
      </ul>
    </div>
  );
}

export default App;