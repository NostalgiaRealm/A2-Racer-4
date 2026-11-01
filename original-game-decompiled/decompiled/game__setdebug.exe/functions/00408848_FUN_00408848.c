
/* ==== FUN_00408848 @ 00408848 ==== 
 * signature: undefined __register FUN_00408848(undefined * param_1)
 * body: 00408848-00408882
 */

void FUN_00408848(undefined *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  float10 local_18;
  undefined *local_c;
  undefined1 local_8;
  
  pbVar1 = FUN_00403dfc(param_1);
  uVar2 = FUN_0040c7a0(pbVar1,&local_18,'\0');
  if ((char)uVar2 == '\0') {
    local_8 = 0xb;
    local_c = param_1;
    FUN_004079a0((undefined4 *)PTR_PTR_00446adc,&local_c,0);
  }
  return;
}


