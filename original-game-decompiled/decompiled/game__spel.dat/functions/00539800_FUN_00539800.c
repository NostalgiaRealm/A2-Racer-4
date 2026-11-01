
/* ==== FUN_00539800 @ 00539800 ==== 
 * signature: undefined __fastcall FUN_00539800(undefined4 * param_1)
 * body: 00539800-00539901
 */

void __fastcall FUN_00539800(undefined4 *param_1)

{
  int iVar1;
  void *this;
  uint *puVar2;
  void *unaff_EBP;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00574160;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00578c54;
  local_4 = 0;
  iVar1 = *(int *)(param_1[10] + 0x18);
  *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) + -1;
  *(int *)(iVar1 + 0x80) = *(int *)(iVar1 + 0x80) + 1;
  this = *(void **)(iVar1 + 0x10);
  if ((param_1[5] & 0xc00) != 0) {
    FUN_0053b9a0((int)param_1);
  }
  switch((int)(param_1[5] << 10) >> 0x1c) {
  case 2:
    FUN_0053b620(this,(int)param_1);
    break;
  case 3:
    FUN_0053b570(this,(int)param_1);
    break;
  case 4:
  case 5:
    FUN_0053b6a0((int)param_1);
  }
  iVar1 = **(int **)(param_1[10] + 0x8c);
  puVar2 = FUN_00539980((int)(param_1 + 6));
  (**(code **)(iVar1 + 0x20))(puVar2);
  iVar1 = **(int **)(param_1[0x11] + 0x8c);
  puVar2 = FUN_00539980((int)(param_1 + 0xd));
  (**(code **)(iVar1 + 0x20))(puVar2);
  (*(code *)**(undefined4 **)param_1[2])(param_1);
  *param_1 = &PTR_FUN_00578c40;
  FUN_005586c5(param_1 + 6,0x1c,2,FUN_0053bbb0);
  *param_1 = &PTR_FUN_00578ab4;
  ExceptionList = unaff_EBP;
  return;
}


