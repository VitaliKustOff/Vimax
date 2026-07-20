class Module
{
public:
    virtual ~Module() = default;

    virtual std::string name() const = 0;

    virtual ActionResult execute(
        const WorkflowStep& step
    ) = 0;
};