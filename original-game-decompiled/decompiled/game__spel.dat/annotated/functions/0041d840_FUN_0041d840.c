
/* ==== FUN_0041d840 @ 0041d840 ==== 
 * signature: undefined4 __stdcall FUN_0041d840(void * param_1, int param_2)
 * body: 0041d840-0041d8a2
 */

uint FUN_0041d840(void *param_1,int param_2)

{
  char *in_EAX;
  int *piVar1;
  int iVar2;
  int local_c [3];
  
  iVar2 = 0;
  local_c[0] = 0;
  local_c[1] = 1;
  local_c[2] = 2;
  if (param_2 != -1) {
    piVar1 = local_c;
    do {
      in_EAX = (char *)FUN_00416780(param_1,*piVar1);
      if ((*in_EAX != '\0') && (*(int *)(in_EAX + 4) == param_2)) {
        return CONCAT31((int3)((uint)in_EAX >> 8),1);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return (uint)in_EAX & 0xffffff00;
}


