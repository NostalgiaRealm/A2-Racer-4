
/* ==== FUN_00412430 @ 00412430 ==== 
 * signature: undefined __register FUN_00412430(int param_1, int * param_2, uint param_3)
 * body: 00412430-00412456;0041247d-004124f0
 */

void FUN_00412430(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint local_c;
  
  local_c = param_3;
  uVar1 = FUN_00413310(param_1,param_2,param_3);
  switch(uVar1 & 0x7f) {
  case 0:
    FUN_00403a0c(param_2,(undefined4 *)&DAT_00412528);
    break;
  default:
    FUN_00411700();
    break;
  case 7:
    FUN_00411b6c(param_1,&local_c,1);
    FUN_00403aa0(param_2,(undefined4 *)0x0,local_c & 0xff);
    puVar2 = (undefined4 *)FUN_00403e08(param_2);
    FUN_00411b6c(param_1,puVar2,local_c & 0xff);
    break;
  case 8:
    FUN_00403a0c(param_2,(undefined4 *)"False");
    break;
  case 9:
    FUN_00403a0c(param_2,(undefined4 *)&DAT_0041250c);
    break;
  case 0xd:
    FUN_00403a0c(param_2,(undefined4 *)&DAT_0041251c);
  }
  return;
}


