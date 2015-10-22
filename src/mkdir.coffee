# Mkdir module
fs = require 'fs'
{execSync} = require 'child_process'

exports.mkdir = (dir) ->
  # body...
  execSync 'mkdir -p .web/test'
