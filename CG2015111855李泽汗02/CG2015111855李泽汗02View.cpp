
// CG2015111855李泽汗02View.cpp: CCG2015111855李泽汗02View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CG2015111855李泽汗02.h"
#endif

#include "CG2015111855李泽汗02Doc.h"
#include "CG2015111855李泽汗02View.h"
#include "CCGDrawDC.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCG2015111855李泽汗02View

IMPLEMENT_DYNCREATE(CCG2015111855李泽汗02View, CView)

BEGIN_MESSAGE_MAP(CCG2015111855李泽汗02View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CCG2015111855李泽汗02View 构造/析构

CCG2015111855李泽汗02View::CCG2015111855李泽汗02View()
{
	// TODO: 在此处添加构造代码

}

CCG2015111855李泽汗02View::~CCG2015111855李泽汗02View()
{
}

BOOL CCG2015111855李泽汗02View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCG2015111855李泽汗02View 绘图

void CCG2015111855李泽汗02View::OnDraw(CDC* pDC)
{
	CCG2015111855李泽汗02Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	((CCGDrawDC *)pDC)->LineDDA(60,180,300,300,RGB(255,0,0));
	((CCGDrawDC *)pDC)->LineBres(160, 80, 300, 300, RGB(0, 255, 0));
	((CCGDrawDC *)pDC)->LineMidpoint(100, 580, 300, 300, RGB(0, 0, 255));
}


// CCG2015111855李泽汗02View 打印

BOOL CCG2015111855李泽汗02View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CCG2015111855李泽汗02View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CCG2015111855李泽汗02View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CCG2015111855李泽汗02View 诊断

#ifdef _DEBUG
void CCG2015111855李泽汗02View::AssertValid() const
{
	CView::AssertValid();
}

void CCG2015111855李泽汗02View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCG2015111855李泽汗02Doc* CCG2015111855李泽汗02View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCG2015111855李泽汗02Doc)));
	return (CCG2015111855李泽汗02Doc*)m_pDocument;
}
#endif //_DEBUG


// CCG2015111855李泽汗02View 消息处理程序
