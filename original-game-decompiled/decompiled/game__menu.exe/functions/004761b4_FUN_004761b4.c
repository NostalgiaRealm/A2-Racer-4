
/* ==== FUN_004761b4 @ 004761b4 ==== 
 * signature: undefined1 __register FUN_004761b4(int * param_1)
 * body: 004761b4-004761f0
 */

undefined1 FUN_004761b4(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 local_c;
  
  local_c = 0;
  piVar2 = FUN_00444864(param_1);
  if (piVar2 != (int *)0x0) {
    for (; piVar2 != param_1; param_1 = (int *)param_1[9]) {
      if (*(char *)((int)param_1 + 0x47) == '\0') {
        return 0;
      }
      cVar1 = (**(code **)(*param_1 + 0x4c))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    local_c = 1;
  }
  return local_c;
}


