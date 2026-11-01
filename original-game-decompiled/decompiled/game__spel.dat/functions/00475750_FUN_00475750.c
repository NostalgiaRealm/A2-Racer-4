
/* ==== FUN_00475750 @ 00475750 ==== 
 * signature: undefined __cdecl FUN_00475750(undefined4 * param_1, int * param_2, void * param_3)
 * body: 00475750-004757b6
 */

void __cdecl FUN_00475750(undefined4 *param_1,int *param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_18 [6];
  
  pvVar2 = FUN_00479a80(param_3,local_18,0);
  iVar1 = *(int *)((int)pvVar2 + 0x10);
  FUN_004cf650(local_18);
  if (0 < *(int *)(*param_2 * 0xf0 + 0x30 + DAT_00715e50)) {
    FUN_00450b30(*param_2,iVar1);
  }
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  return;
}


