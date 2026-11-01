
/* ==== FUN_0055069a @ 0055069a ==== 
 * signature: undefined __stdcall FUN_0055069a(undefined4 * param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined8 param_6)
 * body: 0055069a-00550717
 */

void FUN_0055069a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined8 param_6)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 local_58 [84];
  
  pbVar1 = (byte *)FUN_00551ac4((undefined1 *)&param_6,'L',*(uint *)(param_4 + 0xc));
  FUN_005587a3(local_58,pbVar1);
  puVar2 = (undefined4 *)FUN_00551b22();
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  return;
}


