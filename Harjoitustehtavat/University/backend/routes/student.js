const express=require('express');
const router=express.Router();
const student=require('../models/student_model');

router.get('/',function(request, response){
    student.getAllStudent(function(err, result){
        if(err){
            response.send(err);
        }
        else{
            console.log(result);
            response.json(result);
        }
    });
});

router.get('/:username', function(request,response){
    student.getOneStudent(request.params.username, function(err, result){
        if(err){
            response.send(err);
        }
        else{
            console.log(result);
            response.json(result[0]);
        }
    })
});

router.post('/',function(request, response){
    student.addStudent(request.body, function(err, result){
        if(err){
            response.send(err);
        }else{
            response.json(result);
        }
    });
});

router.put('/:username', function(request, response){
    student.updateStudent(request.params.username, request.body, function(err, result){
        if(err){
            response.send(err);
        }else{
            response.json(result);
            console.log(result.affectedRows);
        }
    });
});

router.delete('/:username',function(request, response){
    student.deleteStudent(request.params.username, function(err, result){
        if(err){
            response.send(err);
        }else{
            response.json(result);
            console.log(result.affectedRows);
        }
    });
});

module.exports=router;