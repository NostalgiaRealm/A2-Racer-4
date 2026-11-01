
/* ==== FUN_0045fcf0 @ 0045fcf0 ==== 
 * signature: undefined __register FUN_0045fcf0(int param_1)
 * body: 0045fcf0-0045fd52
 */

void FUN_0045fcf0(int param_1)

{
  undefined4 uVar1;
  undefined4 local_1d0 [115];
  
  if (param_1 == 0) {
    FUN_00403c40(" Self = nil: ClearFile");
  }
  uVar1 = FUN_004087a4(*(undefined **)(param_1 + 4));
  if ((char)uVar1 != '\0') {
    FUN_00405b82(local_1d0,*(char **)(param_1 + 4));
    FUN_00405ca2((undefined *)local_1d0);
    FUN_0040284c();
    FUN_00405c24((undefined *)local_1d0);
    FUN_0040284c();
  }
  return;
}


