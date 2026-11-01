
/* ==== FUN_00474d49 @ 00474d49 ==== 
 * signature: undefined __thiscall FUN_00474d49(void * this, char param_1, undefined4 param_2, char param_3, undefined4 param_4)
 * body: 00474d49-00474e95
 */

void __thiscall
FUN_00474d49(void *this,char param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  float in_EAX;
  int iVar2;
  int iVar3;
  float unaff_retaddr;
  float in_stack_0000002c;
  float in_stack_00000030;
  float in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 *in_stack_00000058;
  int *in_stack_0000005c;
  char in_stack_00000068;
  
  uStack0000003c = 0;
  uStack00000040 = 0;
  uStack00000044 = 0;
  FUN_004a79d0(*in_stack_0000005c,in_stack_00000030,in_stack_00000034,in_stack_00000038,0,0,0,
               (float)this,in_EAX,unaff_retaddr,param_1,param_2,param_3,param_4);
  FUN_004a7190(*in_stack_0000005c);
  iVar3 = 1;
  iVar1 = *(int *)(DAT_0073b168 +
                  *(int *)(DAT_0073b0d0 +
                           *(int *)(*in_stack_0000005c * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 4) * 9
                  );
  if (1 < iVar1) {
    uStack0000003c = 0;
    uStack00000040 = 0;
    uStack00000044 = 0;
    do {
      iVar2 = FUN_00454de0(*in_stack_0000005c,iVar3);
      FUN_004a79d0(iVar2,in_stack_00000038,uStack0000003c,uStack00000040,uStack00000044,
                   in_stack_00000048,in_stack_0000004c,in_stack_00000034,in_stack_00000030,
                   in_stack_0000002c,in_stack_00000068,FUN_00454af0,'\0',1);
      FUN_004a7190(iVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  *in_stack_00000058 = &PTR_FUN_00576a88;
  in_stack_00000058[2] = 0;
  return;
}


