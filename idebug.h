#pragma once

class IDebugCommands
{
public:
   virtual void GetDebugCommands(eastl::vector<int> & pvids, eastl::vector<int> & pvcommandid) = 0;
   virtual void RunDebugCommand(int id) = 0;
};
