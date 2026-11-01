
/* ==== FUN_004155b0 @ 004155b0 ==== 
 * signature: int __cdecl FUN_004155b0(int param_1, char param_2)
 * body: 004155b0-0041563b
 */

int __cdecl FUN_004155b0(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 * 0xf0 + 0x3c + DAT_00715e50);
  iVar1 = FUN_00422f70(param_1,iVar3,0,1);
  if (iVar1 != -1) {
    uVar2 = FUN_00422f20(param_1,iVar1,2);
    if ((char)uVar2 == '\x01') {
      return (-(uint)(param_2 != '\0') & 0xfffffffe) + 9;
    }
  }
  iVar3 = FUN_00422f70(param_1,iVar3,2,1);
  if (iVar3 != -1) {
    uVar2 = FUN_00422f20(param_1,iVar3,2);
    if ((char)uVar2 == '\x01') {
      return (-(uint)(param_2 != '\0') & 0xfffffffe) + 10;
    }
  }
  return 0;
}


