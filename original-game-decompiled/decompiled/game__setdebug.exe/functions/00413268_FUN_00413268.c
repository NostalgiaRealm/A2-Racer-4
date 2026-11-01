
/* ==== FUN_00413268 @ 00413268 ==== 
 * signature: undefined __register FUN_00413268(int param_1, int * param_2, uint param_3)
 * body: 00413268-004132c5
 */

void FUN_00413268(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint local_c;
  
  local_c = 0;
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)uVar1 == '\x06') {
    FUN_00411b6c(param_1,&local_c,1);
  }
  else if ((char)uVar1 == '\f') {
    FUN_00411b6c(param_1,&local_c,4);
  }
  else {
    FUN_00411700();
  }
  FUN_00403aa0(param_2,(undefined4 *)0x0,local_c);
  FUN_00411b6c(param_1,(undefined4 *)*param_2,local_c);
  return;
}


