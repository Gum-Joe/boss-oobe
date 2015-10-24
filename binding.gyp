{
  "targets": [
    {
      "target_name": "mkdir",
      "conditions": [["OS == 'win'", {
        "sources": ["src/mkdir_windows.cc", "src/mkdir_windows_bash.cc"]
      }]]
    }
]}
