
/* ==== FUN_00454e4f @ 00454e4f ==== 
 * signature: int __fastcall FUN_00454e4f(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, int param_12, undefined4 param_13)
 * body: 00454e4f-00454ebf
 */

int __fastcall
FUN_00454e4f(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,int param_11,int param_12,undefined4 param_13)

{
  void *this;
  undefined4 *in_EAX;
  int iVar1;
  void *pvVar2;
  int unaff_ESI;
  int iVar3;
  
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
  iVar1 = FUN_004a78a0(*in_EAX,in_EAX[1],in_EAX[2],param_5,param_6,param_7,param_8,param_9,param_10,
                       param_11,param_12);
  iVar3 = iVar1 * 0xf0;
  this = (void *)(iVar3 + DAT_00715e50);
  pvVar2 = (void *)FUN_004a7bd0(unaff_ESI + DAT_00715e50);
  FUN_004a7be0(this,pvVar2);
  *(undefined4 *)(iVar3 + 0x34 + DAT_00715e50) = *(undefined4 *)(unaff_ESI + 0x34 + DAT_00715e50);
  *(undefined4 *)(iVar3 + 0x5c + DAT_00715e50) = 1;
  return iVar1;
}


