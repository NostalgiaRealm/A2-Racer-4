
/* ==== FUN_00474f46 @ 00474f46 ==== 
 * signature: undefined __fastcall FUN_00474f46(undefined4 param_1, undefined4 param_2)
 * body: 00474f46-004750b5
 */

void __fastcall FUN_00474f46(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *in_stack_00000044;
  int *in_stack_00000048;
  char in_stack_00000054;
  
  *(char *)(unaff_EBP + 5) = *(char *)(unaff_EBP + 5) + (char)((uint)param_2 >> 8);
  uStack00000028 = 0;
  uStack0000002c = 0;
  uStack00000030 = 0;
  FUN_004a79d0(*in_stack_00000048,in_stack_0000001c,in_stack_00000020,in_stack_00000024,0,0,0,
               in_stack_00000018,in_stack_00000014,in_stack_00000010,'\x01',FUN_00454af0,'\x01',1);
  FUN_004a7190(*in_stack_00000048);
  iVar3 = 1;
  iVar1 = *(int *)(DAT_0073b168 +
                  *(int *)(DAT_0073b0d0 +
                           *(int *)(*in_stack_00000048 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 4) * 9
                  );
  if (1 < iVar1) {
    uStack00000028 = 0;
    uStack0000002c = 0;
    uStack00000030 = 0;
    do {
      iVar2 = FUN_00454de0(*in_stack_00000048,iVar3);
      FUN_004a79d0(iVar2,in_stack_00000024,uStack00000028,uStack0000002c,uStack00000030,
                   in_stack_00000034,in_stack_00000038,in_stack_00000020,in_stack_0000001c,
                   in_stack_00000018,in_stack_00000054,FUN_00454af0,'\x01',1);
      FUN_004a7190(iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  *in_stack_00000044 = &PTR_FUN_00576a88;
  in_stack_00000044[2] = 0;
  return;
}


