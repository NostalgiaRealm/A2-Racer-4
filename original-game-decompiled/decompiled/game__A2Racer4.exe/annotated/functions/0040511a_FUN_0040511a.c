
/* ==== FUN_0040511a @ 0040511a ==== 
 * signature: undefined4 __cdecl FUN_0040511a(uint param_1)
 * body: 0040511a-00405150
 */

undefined4 __cdecl FUN_0040511a(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 != 0) {
    cVar1 = (char)param_1;
    param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
    UVar2 = GetDriveTypeA((LPCSTR)&param_1);
    if ((UVar2 == 0) || (UVar2 == 1)) {
      return 0;
    }
  }
  return 1;
}


