
/* ==== FUN_00417fbc @ 00417fbc ==== 
 * signature: UINT __register FUN_00417fbc(HPALETTE param_1, LPPALETTEENTRY param_2, int param_3)
 * body: 00417fbc-0041800c
 */

UINT FUN_00417fbc(HPALETTE param_1,LPPALETTEENTRY param_2,int param_3)

{
  int iVar1;
  UINT local_10;
  
  local_10 = 0;
  if (param_1 != (HPALETTE)0x0) {
    iVar1 = GetObjectA(param_1,4,&local_10);
    if ((iVar1 != 0) && (local_10 != 0)) {
      if ((int)(param_3 + 1U) < (int)local_10) {
        local_10 = param_3 + 1U;
      }
      GetPaletteEntries(param_1,0,local_10,param_2);
      FUN_00417d10((int)param_2,local_10);
    }
  }
  return local_10;
}


