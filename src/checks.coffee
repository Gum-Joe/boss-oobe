# Checks
{spwanSync} = require 'child_process'

exports.checkBash = () ->
  # body...
  bash = spwanSync('bash --version')
  if bash.stderr
    console.log 'ERR: Please run this through bash or make sure a set of Linux tools are in the PATH'
    process.exit 1
