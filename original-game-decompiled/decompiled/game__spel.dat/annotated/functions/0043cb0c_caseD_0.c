
/* ==== switchD_0043cb05::caseD_0 @ 0043cb0c ==== 
 * signature: undefined4 __stdcall caseD_0(void)
 * body: 0043cb0c-0043cb68
 */

undefined4 switchD_0043cb05::caseD_0(void)

{
  int in_EAX;
  
  FUN_004b1210((void *)(DAT_00719b50 + in_EAX * 0x178),(&DAT_006c3bac)[DAT_006c407c * 3],
               (&DAT_006c3bb0)[DAT_006c407c * 3],(&DAT_006c3bb4)[DAT_006c407c * 3]);
  DAT_006c407c = DAT_006c407c + 1;
  if (DAT_006c4078 <= DAT_006c407c) {
    FUN_0043cab0();
    return 0;
  }
  return 0;
}


