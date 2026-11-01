
/* ==== TCustomMemo.dyn_0087 @ 004273e0 ==== 
 * signature: undefined TCustomMemo.dyn_0087(void)
 * body: 004273e0-00427411
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomMemo_dyn_0087(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((char)param_1[0x84] == '\0') {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffffffd;
  }
  else {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 2;
  }
  if (*(char *)((int)param_1 + 0x20f) == '\0') {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffffffb;
  }
  return;
}


