
/* ==== FUN_0054ec38 @ 0054ec38 ==== 
 * signature: undefined __cdecl FUN_0054ec38(undefined4 * param_1)
 * body: 0054ec38-0054ec97
 */

void __cdecl FUN_0054ec38(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *local_c;
  uint local_8;
  
  uVar2 = DAT_0074dcf4;
  uVar1 = DAT_0074dce0;
  local_c = _malloc(0x200);
  bVar3 = local_c == (undefined4 *)0x0;
  if (bVar3) {
    local_c = (undefined4 *)PTR_DAT_005c8384;
  }
  else {
    FUN_0055b3c0(local_c,(undefined4 *)PTR_DAT_005c8384,0x200);
  }
  local_8 = (uint)!bVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = local_c;
  param_1[3] = local_8;
  return;
}


