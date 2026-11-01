
/* ==== FUN_0040beec @ 0040beec ==== 
 * signature: undefined4 __register FUN_0040beec(undefined * param_1, int param_2)
 * body: 0040beec-0040bf0e
 */

undefined4 FUN_0040beec(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  if (DAT_004ac5bc != '\0') {
    pbVar2 = FUN_004040a0(param_1);
    uVar1 = FUN_0040be74(pbVar2,param_2 + -1);
  }
  return uVar1;
}


