{
  "targets": [
    {
      "target_name": "mkdir",
      "sources": ["cplus/windows/mkdir-windows.cc", "cplus/windows/mkdir-bash.cc"],
      "conditions": [['OS == "win"', {
        #"sources": ["cplus/windows/mkdir-windows.cc", "cplus/windows/mkdir-bash.cc"]
      }]]
    }
]}
