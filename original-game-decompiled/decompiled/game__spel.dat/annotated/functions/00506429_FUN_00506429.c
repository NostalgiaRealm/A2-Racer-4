
/* ==== FUN_00506429 @ 00506429 ==== 
 * signature: undefined __thiscall FUN_00506429(void * this, undefined4 * param_1)
 * body: 00506429-0050642b
 */

void __thiscall FUN_00506429(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *in_EAX;
  char unaff_BL;
  int unaff_EBP;
  
  *in_EAX = *in_EAX + (char)this;
  *(char *)(unaff_EBP + -0x6fffafa2) = *(char *)(unaff_EBP + -0x6fffafa2) + unaff_BL;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  return;
}


