
/* ==== getSystemCP @ 1000c6d0 ==== 
 * signature: UINT __cdecl getSystemCP(UINT param_1)
 * body: 1000c6d0-1000c728
 * note: Library Function - Single Match  _getSystemCP  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_10031628 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_10031628 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_10031628 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_10031628 = 1;
    param_1 = DAT_1003164c;
  }
  return param_1;
}


