#include <QtTest>

// add necessary includes here
#include <../Client/tree.cpp>
#include <../Client/node.cpp>
class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

private slots:
    void test_kasymov_preffer_decoder1();
    void test_kasymov_preffer_decoder2();
    void test_kasymov_preffer_decoder3();

};

test::test()
{

}

test::~test()
{

}

void test::test_kasymov_preffer_decoder1()
{
    std::vector<int> input = {7, 9, 0, 0, 14, 10, 15, 0, 0, 11, 0, 2, 6, 0, 9};
    std::vector<std::vector<int>> output = {1, 3, 6, 5};
    QVERIFY(get_smeg_by_cod_prufer(input) == output);
}

void test::test_kasymov_preffer_decoder2()
{
    std::vector<int> input = {4, 9, 8, 2, 1, 9, 0, 6, 9, 3, 5, 4, 0, 2, 1};
    std::vector<std::vector<int>> output = {4, 2, 1, 0};
    QVERIFY(get_smeg_by_cod_prufer(input) != output);
}

void test::test_kasymov_preffer_decoder3()
{
    std::vector<int> input = {4, 5, 2, 0, 9, 3, 1, 0, 0, 3, 7, 4, 7, 5, 4};
    std::vector<std::vector<int>> output = {8, 2, 4, 8};
    QVERIFY(get_smeg_by_cod_prufer(input) != output);

}



QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"
