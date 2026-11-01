
/* ==== FUN_00569232 @ 00569232 ==== 
 * signature: undefined4 __cdecl FUN_00569232(uint param_1)
 * body: 00569232-00569268
 */

undefined4 __cdecl FUN_00569232(uint param_1)

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


