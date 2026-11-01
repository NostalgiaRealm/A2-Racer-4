
/* ==== FUN_00413fe4 @ 00413fe4 ==== 
 * signature: undefined __register FUN_00413fe4(int param_1, int * param_2, uint param_3)
 * body: 00413fe4-0041400a;00414031-004140a4
 */

void FUN_00413fe4(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint local_c;
  
  local_c = param_3;
  uVar1 = FUN_00414ec4(param_1,param_2,param_3);
  switch(uVar1 & 0x7f) {
  case 0:
    FUN_00403cb0(param_2,(undefined4 *)&DAT_004140dc);
    break;
  default:
    FUN_004132b4();
    break;
  case 7:
    FUN_00413720(param_1,&local_c,1);
    FUN_00403d44(param_2,(undefined4 *)0x0,local_c & 0xff);
    puVar2 = (undefined4 *)FUN_004040ac(param_2);
    FUN_00413720(param_1,puVar2,local_c & 0xff);
    break;
  case 8:
    FUN_00403cb0(param_2,(undefined4 *)"False");
    break;
  case 9:
    FUN_00403cb0(param_2,(undefined4 *)&DAT_004140c0);
    break;
  case 0xd:
    FUN_00403cb0(param_2,(undefined4 *)&DAT_004140d0);
  }
  return;
}


