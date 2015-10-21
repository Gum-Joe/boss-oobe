# Mkdir module
fs = require 'fs'
{execSync} = require 'child_process'

exports.mkdirs = (dir) ->
  # body...
  i = 0
  while i < dir.length
    execSync 'mkdir '+dir[i]
    i++
