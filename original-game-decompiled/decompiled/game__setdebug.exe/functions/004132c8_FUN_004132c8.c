
/* ==== FUN_004132c8 @ 004132c8 ==== 
 * signature: undefined __register FUN_004132c8(int param_1, int * param_2, uint param_3)
 * body: 004132c8-0041330d
 */

void FUN_004132c8(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  UINT local_c;
  
  local_c = 0;
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  if ((char)uVar1 != '\x12') {
    FUN_00411700();
  }
  FUN_00411b6c(param_1,&local_c,4);
  FUN_00404124(param_2,local_c);
  FUN_00411b6c(param_1,(undefined4 *)*param_2,local_c * 2);
  return;
}


