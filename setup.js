// Generated by CoffeeScript 1.9.3
(function() {
  var begin, execSync, fs, mkdir;

  fs = require('fs');

  execSync = require('child_process').execSync;

  mkdir = require('./build/Release/mkdir-windows');

  begin = function(type, main) {
    return console.log(mkdir.mkdir());
  };

  begin();

}).call(this);