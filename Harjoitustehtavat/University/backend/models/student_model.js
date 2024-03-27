const db=require('../database');
const bcrypt=require('bcryptjs');

const saltRounds=10;
const student={
    getAllStudent(callback){
        return db.query("SELECT * FROM student",callback);

    },
    addStudent(newStudent, callback){
        bcrypt.hash(newStudent.password, saltRounds, function(err,hashedPassword){
            return db.query("INSERT INTO student VALUES(?,?,?,?,?,?)",[
                newStudent.username, newStudent.fname, newStudent.lname, newStudent.streetaddress, newStudent.email, hashedPassword], callback);
        });
    },
    updateStudent(username, updateData, callback){
        bcrypt.hash(updateData, saltRounds, function(err, hashedPassword){
            return db.query("UPDATE student SET fname=?, lname=?, email=?, streetaddress=?, password=? WHERE username=?",
            [updateData.fname, updateData.lname, updateData.email, updateData.streetaddress, hashedPassword, username],callback);
        });

    },
    getOneStudent(username, callback){
        return db.query("SELECT * FROM student WHERE username=?",[username], callback);
    },
    deleteStudent(username, callback){
        return db.query("DELETE FROM student WHERE username=?",[username],callback);
    }
}

module.exports=student;