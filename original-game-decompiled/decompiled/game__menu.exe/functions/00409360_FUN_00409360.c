
/* ==== FUN_00409360 @ 00409360 ==== 
 * signature: undefined __register FUN_00409360(undefined * param_1)
 * body: 00409360-0040939a
 */

void FUN_00409360(undefined *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  float10 local_18;
  undefined *local_c;
  undefined1 local_8;
  
  pbVar1 = FUN_004040a0(param_1);
  uVar2 = FUN_0040d490(pbVar1,&local_18,'\0');
  if ((char)uVar2 == '\0') {
    local_8 = 0xb;
    local_c = param_1;
    FUN_0040810c((undefined4 *)PTR_PTR_004ab69c,&local_c,0);
  }
  return;
}


