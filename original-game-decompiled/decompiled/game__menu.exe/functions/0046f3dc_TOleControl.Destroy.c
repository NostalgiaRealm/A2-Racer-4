
/* ==== TOleControl.Destroy @ 0046f3dc ==== 
 * signature: undefined TOleControl.Destroy(void)
 * body: 0046f3dc-0046f498
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TOleControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0047084c(piVar1,'\0');
  if (piVar1[0x80] != 0) {
    (**(code **)(*(int *)piVar1[0x80] + 0x18))();
  }
  FUN_0046fb4c((int)piVar1);
  FUN_0046fbf4((int)piVar1);
  FUN_00405860(piVar1 + 0x81);
  if (piVar1[0x80] != 0) {
    (**(code **)(*(int *)piVar1[0x80] + 0xc))();
  }
  FUN_00405860(piVar1 + 0x80);
  FUN_00402f9c((int *)piVar1[0x7e]);
  FUN_0046f3a4(piVar1 + 0x8a);
  FUN_0046f3a4(piVar1 + 0x8b);
  *(int *)(piVar1[0x7c] + 0x48) = *(int *)(piVar1[0x7c] + 0x48) + -1;
  if (*(int *)(piVar1[0x7c] + 0x48) == 0) {
    FUN_0046fbb4((int)piVar1);
  }
  TWinControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


