
/* ==== __break @ 0051034e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0051034e-0051034e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


